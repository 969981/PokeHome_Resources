/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00039E64
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00139e64; name: FUN_.text__00139e64
 */


void FUN__text__00139e64(long param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 0x64c) == 1) { // [自动静态注释] 条件判断/分支
    lVar2 = (param_2 & 0xffffffff) * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_58 = *(undefined8 *)(lVar2 + 0x7225c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x7225f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x722630); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x721af0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x7226d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x722668); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x722710); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(int *)(param_1 + 0x64c) != 0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = (param_2 & 0xffffffff) * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_58 = *(undefined8 *)(lVar2 + 0x721dc8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x7222a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x7222f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x722350); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x7223a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x722458); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_58 = *(undefined8 *)(lVar2 + 0x722508); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


