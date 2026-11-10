/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003ADA80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ada80; name: FUN_.text__004ada80
 */


int * FUN__text__004ada80(long *param_1,undefined8 param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)&DAT_00aea968); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar2 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
    piVar5 = (int *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar4 = (int)((ulong)param_2 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (int)param_3 + (int)param_2 + iVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
      uVar3 = uVar1 / uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    for (piVar5 = *(int **)(*param_1 + (ulong)(uVar1 - uVar3 * uVar2) * 8); // [自动静态注释] 循环/迭代
        (piVar5 != (int *)0x0 && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (((*piVar5 != (int)param_2 || (piVar5[1] != iVar4)) || (*(long *)(piVar5 + 2) != param_3)))) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        ; piVar5 = *(int **)(piVar5 + 4)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex((MutexType *)&DAT_00aea968); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return piVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


