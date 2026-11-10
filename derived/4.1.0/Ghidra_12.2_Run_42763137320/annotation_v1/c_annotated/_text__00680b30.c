/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00580B30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680b30; name: FUN_.text__00680b30
 */


undefined8 FUN__text__00680b30(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[4] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  param_1[6] = 0x1000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = FUN__text__006809d4(param_2,0x400); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = lVar1;
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = 0xfffffc7b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[1] = 0x7f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 7) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


