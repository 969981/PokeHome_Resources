/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00110F70
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00210f70; name: FUN_.text__00210f70
 */


uint FUN__text__00210f70(long param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(long *)(param_1 + 0x68) == 0) || // [自动静态注释] 条件判断/分支
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 == (undefined8 *)0x0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00211050: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = (long *)(**(code **)*puVar5)(puVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)FUN__text__0020a9bc(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar3 != plVar2) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar2 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0); // [自动静态注释] 循环/迭代
    if (plVar2 == (long *)0x0) goto LAB__text__00211050; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  bVar1 = FUN__text__0020c9f0(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)((long)puVar5 + 0x24) != 0) { // [自动静态注释] 条件判断/分支
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      pcVar4 = (char *)FUN__text__0020beec(puVar5 + -10,*(undefined4 *)((long)puVar5 + 0x6c),uVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((*pcVar4 != '\0') && ((bVar1 & pcVar4[0x11]) != 0)) { // [自动静态注释] 条件判断/分支
        return uVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar6 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar6 < *(uint *)((long)puVar5 + 0x24)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


