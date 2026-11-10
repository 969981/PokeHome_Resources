/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0059D5AC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069d5ac; name: FUN_.text__0069d5ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0069d5ac(long *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = _DAT_008a68b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = lVar2 + 0x10;
  plVar1 = (long *)FUN__text__006a0f04(0xd8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(plVar1 + 2) = 0;
    lVar2 = _DAT_008a68c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar1 = lVar2 + 0x10;
    plVar1[1] = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006f5bcc(plVar1 + 8); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006f4e0c(plVar1 + 0x11); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar1[0x1a] = -0x100000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_1[1] = (long)plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[7] = (long)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = FUN__text__006c1db0(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[2] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


