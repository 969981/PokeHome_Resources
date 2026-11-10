/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002A5C40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a5c40; name: FUN_.text__003a5c40
 */


void FUN__text__003a5c40(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__003a14e8(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar2 = (undefined4 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           (**(code **)(**(long **)(param_1 + 0x98) + 0xf8)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     (*(long **)(param_1 + 0x98),param_1 + 0xa8,0x7133cf); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(char *)(param_1 + 0x510) = (char)*puVar2;
  *(char *)(param_1 + 0x511) = (char)puVar2[1];
  uVar1 = puVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x513) = 0xff;
  *(char *)(param_1 + 0x512) = (char)uVar1;
  puVar2 = (undefined4 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           (**(code **)(**(long **)(param_1 + 0x98) + 0xf8)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     (*(long **)(param_1 + 0x98),param_1 + 0xa8,0x71958f); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(char *)(param_1 + 0x514) = (char)*puVar2;
  *(char *)(param_1 + 0x515) = (char)puVar2[1];
  uVar1 = puVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x517) = 0xff;
  *(char *)(param_1 + 0x516) = (char)uVar1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


