/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A6570
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a6570; name: FUN_.text__006a6570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a6570(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = param_1 + 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == lVar2) { // [自动静态注释] 条件判断/分支
    lVar3 = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar1 = strcmp(*(char **)(lVar4 + 0x10),(char *)0x714c32); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar1 == 0) goto LAB__text__006a65d4; // [自动静态注释] 条件判断/分支
      lVar4 = *(long *)(lVar4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 != lVar2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  goto LAB__text__006a65f4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  while (lVar3 = *(long *)(lVar3 + 8), lVar3 != lVar2) { // [自动静态注释] 循环/迭代
LAB__text__006a65d4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar1 = strcmp(*(char **)(lVar3 + 0x10),(char *)0x714c32); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar1 == 0) goto LAB__text__006a65f4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__006a65f4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(long *)(param_1 + 0x20) = lVar3;
  FUN__text__006ca610(param_1,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined2 *)(param_1 + 0x10d) = 0;
  lVar2 = FUN__text__006c9ec4(param_1 + 0x48); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x10f) == '\0')) { // [自动静态注释] 条件判断/分支
    (*(code *)*_DAT_008a6968)(lVar2,*_DAT_008a6970); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x80) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


