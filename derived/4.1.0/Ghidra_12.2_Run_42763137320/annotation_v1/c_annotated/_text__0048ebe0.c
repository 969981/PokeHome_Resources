/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0038EBE0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048ebe0; name: FUN_.text__0048ebe0
 */


void FUN__text__0048ebe0(long param_1,int param_2,long param_3,int *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  piVar1 = *(int **)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(uint *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = (ulong)uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar3 = piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__0048ec5c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (piVar3 == piVar1 + uVar6 * 6) goto LAB__text__0048ecac; // [自动静态注释] 条件判断/分支
    plVar2 = (long *)(piVar3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*plVar2 == param_3) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(piVar3 + 4) = *(undefined8 *)param_4;
    } // [自动静态注释] 作用域/控制流边界
    else if (param_4[1] != 2) { // [自动静态注释] 条件判断/分支
      if (*param_4 < piVar3[4]) { // [自动静态注释] 条件判断/分支
        piVar3[4] = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (piVar3[5] != 1) { // [自动静态注释] 条件判断/分支
        piVar3[5] = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = uVar6 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*piVar3 == param_2) goto LAB__text__0048ec5c; // [自动静态注释] 条件判断/分支
      piVar3 = piVar3 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = lVar4 + -0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 != 0); // [自动静态注释] 循环/迭代
LAB__text__0048ecac: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    piVar3 = piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar5 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__0048ecdc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (piVar3 == piVar1 + uVar6 * 6) goto LAB__text__0048ecec; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar4 = uVar6 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (*piVar3 == param_2) goto LAB__text__0048ecdc; // [自动静态注释] 条件判断/分支
        piVar3 = piVar3 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar4 = lVar4 + -0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar4 != 0); // [自动静态注释] 循环/迭代
LAB__text__0048ecec: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(uint *)(param_1 + 0x1c) <= uVar5) { // [自动静态注释] 条件判断/分支
        uVar6 = FUN__text__0048ee50(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (((uVar6 & 1) == 0) || (*(uint *)(param_1 + 0x1c) <= uVar5)) goto LAB__text__0048ed44; // [自动静态注释] 条件判断/分支
        uVar5 = *(uint *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar1 = *(int **)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(uint *)(param_1 + 0x18) = uVar5 + 1;
      if (piVar1 == (int *)0x0) goto LAB__text__0048ed44; // [自动静态注释] 条件判断/分支
      piVar3 = piVar1 + (ulong)uVar5 * 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *piVar3 = param_2;
    } // [自动静态注释] 作用域/控制流边界
    plVar2 = (long *)(piVar3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(piVar3 + 4) = *(undefined8 *)param_4;
  } // [自动静态注释] 作用域/控制流边界
  *plVar2 = param_3;
LAB__text__0048ed44: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


