/*
 * Copyright (c) 2021, NVIDIA CORPORATION. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Docstrings for the pyCaffe parser bindings.
#pragma once

namespace tensorrt
{
    namespace OnnxParserDoc
    {
        constexpr const char* descr = R"trtdoc(
            This class is used for parsing Onnx models into a TensorRT network definition

            :ivar num_errors: :class:`int` The number of errors that occurred during prior calls to :func:`parse`
        )trtdoc";

        constexpr const char* init = R"trtdoc(
            :arg network: The network definition to which the parser will write.
            :arg logger: The logger to use.
        )trtdoc";

        constexpr const char* parse = R"trtdoc(
            Parse a serialized Onnx model into the TensorRT network. Note that a result of true does not guarantee that the operator will be supported in all cases (i.e., this function may return false-positives).

            :arg model: The serialized Onnx model object.

            :returns: true if the model was parsed successfully
        )trtdoc";

        constexpr const char* parseFromFile = R"trtdoc(
            Parse an ONNX model from file into a TensorRT network. Note that a result of true does not guarantee that the operator will be supported in all cases (i.e., this function may return false-positives).

            :arg model: The path to an ONNX model.

            :returns: true if the model was parsed successfully
        )trtdoc";

        constexpr const char* supports_operator  = R"trtdoc(
            Returns whether the specified operator may be supported by the parser.

            :arg op_name:  The name of the Onnx operator to check for support
        )trtdoc";

        constexpr const char* get_error = R"trtdoc(
            Get an error that occurred during prior calls to :func:`parse`

            :arg index: Index of the error
        )trtdoc";

        constexpr const char* clear_errors = R"trtdoc(
            Clear errors from prior calls to :func:`parse`
        )trtdoc";

        constexpr const char* get_refit_map = R"trtdoc(
            Get description of all weights that could be refit.

            :returns: The names of ONNX weights that can be refitted, along with their corresponding TensorRT layer and weight role.
        )trtdoc";


    } /* OnnxParserDoc */

    namespace ErrorCodeDoc
    {
        constexpr const char* descr = R"trtdoc(
            The type of parser error
        )trtdoc";
    } /* ErrorCodeDoc */

    namespace ParserErrorDoc
    {
        constexpr const char* descr = R"trtdoc(
            An object containing information about an error
        )trtdoc";

        constexpr const char* code = R"trtdoc(
            :returns: The error code
        )trtdoc";

        constexpr const char* desc = R"trtdoc(
            :returns: Description of the error
        )trtdoc";

        constexpr const char* file = R"trtdoc(
            :returns: Source file in which the error occurred
        )trtdoc";

        constexpr const char* line = R"trtdoc(
            :returns: Source line at which the error occurred
        )trtdoc";

        constexpr const char* func = R"trtdoc(
            :returns: Source function in which the error occurred
        )trtdoc";

        constexpr const char* node = R"trtdoc(
            :returns: Index of the Onnx model node in which the error occurred
        )trtdoc";
    } /* IParserErrorDoc */

    constexpr const char* get_nv_onnx_parser_version = R"trtdoc(
        :returns: The Onnx version
    )trtdoc";

    namespace IOnnxPluginFactoryDoc
    {
        constexpr const char* descr = R"trtdoc(
            This plugin factory handles deserialization of the plugins that are built
            into the ONNX parser. Engines with legacy plugin layers built using the ONNX parser
            must use this plugin factory during deserialization.
        )trtdoc";

        constexpr const char* init = R"trtdoc(
            :arg logger: The logger to use.
        )trtdoc";
    } /* IOnnxPluginFactoryDoc */

} /* tensorrt */
