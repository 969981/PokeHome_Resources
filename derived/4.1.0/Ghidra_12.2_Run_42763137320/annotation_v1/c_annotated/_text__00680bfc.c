/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00580BFC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680bfc; name: FUN_.text__00680bfc
 */


void FUN__text__00680bfc(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_1[3] != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar2 = *(undefined8 **)(*param_1 + (uVar3 + param_1[2] & param_1[1]) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__00683180(puVar2[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00683180(*puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006809e4(lVar1,puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar3 < (ulong)param_1[3]); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006809e4(lVar1,*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


