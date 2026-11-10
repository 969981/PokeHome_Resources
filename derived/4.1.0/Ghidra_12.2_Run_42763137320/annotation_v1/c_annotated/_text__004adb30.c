/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003ADB30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004adb30; name: FUN_.text__004adb30
 */


void FUN__text__004adb30(long *param_1,undefined8 param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)&DAT_00aea968); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
    iVar6 = (int)((ulong)param_2 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (int)param_3 + (int)param_2 + iVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
      uVar5 = uVar3 / uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    piVar2 = (int *)(*param_1 + (ulong)(uVar3 - uVar5 * uVar4) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar8 = *(int **)piVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (piVar8 != (int *)0x0) { // [自动静态注释] 条件判断/分支
      piVar7 = (int *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (((*piVar8 == (int)param_2) && (piVar8[1] == iVar6)) && // [自动静态注释] 条件判断/分支
           (*(long *)(piVar8 + 2) == param_3)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (piVar7 != (int *)0x0) { // [自动静态注释] 条件判断/分支
            piVar2 = piVar7 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *(undefined8 *)piVar2 = *(undefined8 *)(piVar8 + 4);
          *(int *)(param_1 + 2) = (int)param_1[2] + -1;
          break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        piVar1 = piVar8 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar7 = piVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar8 = *(int **)piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (*(int **)piVar1 != (int *)0x0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex((MutexType *)&DAT_00aea968); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


