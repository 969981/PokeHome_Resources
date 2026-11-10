/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003140A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004140a0; name: FUN_.text__004140a0
 */


undefined8 FUN__text__004140a0(long *param_1,int param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar5 = (int)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = iVar5 - ((uint)(param_3 >> 1) & 0x55555555); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = (uVar6 & 0x33333333) + (uVar6 >> 2 & 0x33333333); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 1) { // [自动静态注释] 条件判断/分支
    return 0x1f; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  param_1[7] = -(param_3 & 0xffffffff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)((long)param_1 + 0x2c) = iVar5;
  *(int *)(param_1 + 6) = iVar5 + -0x18;
  iVar3 = FUN__text__004058b0(param_1 + 5); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar3 != 0) { // [自动静态注释] 条件判断/分支
    return 9; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00405b80((int)param_1[5],0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = FUN__text__00400f90(0x12,*(int *)((long)param_1 + 0x2c) * param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
      return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (-1 < param_2 + -1) { // [自动静态注释] 条件判断/分支
      uVar6 = iVar5 * (param_2 + -1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pMVar1 = (MutexType *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar3 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        while( true ) { // [自动静态注释] 循环/迭代
          plVar2 = (long *)(lVar4 + (ulong)uVar6 + (ulong)*(uint *)(param_1 + 6)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *plVar2 = 0;
          *(int *)(plVar2 + 1) = (int)param_1[6];
          nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (*param_1 != 0) break; // [自动静态注释] 条件判断/分支
          *param_1 = (long)plVar2;
          *plVar2 = 0;
          nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          iVar3 = iVar3 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar6 = uVar6 - iVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (iVar3 < 1) goto LAB__text__004141f0; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        *plVar2 = *param_1;
        *param_1 = (long)plVar2;
        nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar3 = iVar3 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = uVar6 - iVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (0 < iVar3); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__004141f0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


