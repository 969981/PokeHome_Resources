/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F6B60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6b60; name: FUN_.text__004f6b60
 */


void FUN__text__004f6b60(undefined8 *param_1,int param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = (MutexType *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  piVar5 = (int *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar8 = piVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar3 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__004f6bd0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (piVar8 != piVar5 + (ulong)uVar3 * 0xe) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(piVar8 + 2) = *param_3;
      uVar7 = param_3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = param_3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      piVar8[10] = *(int *)(param_3 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(piVar8 + 6) = uVar2;
      *(undefined8 *)(piVar8 + 8) = uVar7;
      *(undefined8 *)(piVar8 + 4) = uVar4;
      uVar4 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(piVar8 + 0xc) = uVar4;
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar6 = (ulong)uVar3 * 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*piVar8 == param_2) goto LAB__text__004f6bd0; // [自动静态注释] 条件判断/分支
      piVar8 = piVar8 + 0xe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = lVar6 + -0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar6 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


