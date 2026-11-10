/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F1460
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f1460; name: FUN_.text__004f1460
 */


void FUN__text__004f1460(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_50 = 0xff00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = FUN__text__004ec6d4(*(undefined8 *)(param_1 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__004ed5a0(*(undefined8 *)(param_1 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_38 = CONCAT44(uVar1,(undefined4)uStack_38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_2c = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(**(long **)(param_1 + 0x80) + 0x148)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (*(long **)(param_1 + 0x80),&local_58,param_1 + 0x90,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


