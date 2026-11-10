/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0038E7A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048e7a0; name: FUN_.text__0048e7a0
 */


void FUN__text__0048e7a0(undefined8 *param_1,uint param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = (MutexType *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar5 = (uint *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar7 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar9 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__0048e814: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (puVar7 != puVar5 + (ulong)uVar9 * 0xc) goto LAB__text__0048e824; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar8 = (ulong)uVar9 * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*puVar7 == param_2 && *(ulong *)(puVar7 + 2) == param_3) goto LAB__text__0048e814; // [自动静态注释] 条件判断/分支
      puVar7 = puVar7 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar8 = lVar8 + -0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar8 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = *(uint *)((long)param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar3 <= uVar9) { // [自动静态注释] 条件判断/分支
    iVar2 = uVar3 + (uVar3 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar3 == 0) { // [自动静态注释] 条件判断/分支
      iVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = FUN__text__0048ed60(param_1,iVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (((uVar4 & 1) == 0) || (*(uint *)((long)param_1 + 0xc) <= uVar9)) goto LAB__text__0048e824; // [自动静态注释] 条件判断/分支
    uVar9 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5 = (uint *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(param_1 + 1) = uVar9 + 1;
  if (puVar5 != (uint *)0x0) { // [自动静态注释] 条件判断/分支
    puVar6 = (ulong *)(puVar5 + (ulong)uVar9 * 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar6 = (ulong)param_2;
    puVar6[1] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6[3] = 0x3f800000ffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6[4] = 0x1ffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0048e824: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


