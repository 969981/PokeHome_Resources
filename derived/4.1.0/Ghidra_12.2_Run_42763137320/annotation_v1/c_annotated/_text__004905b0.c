/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003905B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004905b0; name: FUN_.text__004905b0
 */


float FUN__text__004905b0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 200) == '\0') { // [自动静态注释] 条件判断/分支
    fVar2 = *(float *)(param_1 + 0xb4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto LAB__text__00490624; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = *(long *)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    fVar2 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (0.0 < *(float *)(param_1 + 0xb4)) goto LAB__text__00490600; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      fVar2 = (float)FUN__text__0048f764(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar1 = *(long *)(lVar1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar1 != 0); // [自动静态注释] 循环/迭代
    if (fVar2 < *(float *)(param_1 + 0xb4)) { // [自动静态注释] 条件判断/分支
LAB__text__00490600: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)(param_1 + 0xc0) = 1;
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(float *)(param_1 + 0xb4) = fVar2;
  *(undefined1 *)(param_1 + 200) = 0;
LAB__text__00490624: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return *(float *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x78) * fVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


