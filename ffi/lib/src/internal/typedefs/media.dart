import 'dart:ffi';
import 'package:ffi/ffi.dart';

/// Following typedef is used for:
/// Media::parse
typedef MediaParseCXX = Pointer<Pointer<Utf8>> Function(
    Pointer<Utf8> type, Pointer<Utf8> resource, Int32 timeout);
typedef MediaParseDart = Pointer<Pointer<Utf8>> Function(
    Pointer<Utf8> type, Pointer<Utf8> resource, int timeout);
