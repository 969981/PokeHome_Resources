/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E8CB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e8cb0; name: FUN_.text__005e8cb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e8cb0(undefined4 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  MutexType *pMVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar2 = _DAT_008a5b60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((*_DAT_008a5b58 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_008a5b58), iVar3 != 0)) { // [自动静态注释] 条件判断/分支
    nn::os::InitializeMutex(pMVar2,false,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ulong *)(pMVar2 + 0x20) = (ulong)(pMVar2 + 0x202f) & 0xffffffffffffe000;
    *(undefined8 *)(pMVar2 + 0x28) = 0xffffffffffffffff;
    do { // [自动静态注释] 循环/迭代
      lVar7 = *(long *)(pMVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = (uint)((int)lVar6 + (int)lVar7) >> 0xd & 0x7f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar1 != 0x7f) { // [自动静态注释] 条件判断/分支
        uVar4 = (undefined4)lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(lVar7 + lVar6) = *(undefined4 *)(pMVar2 + 0x28);
          *(undefined4 *)(pMVar2 + 0x28) = uVar4;
          if (*(int *)(pMVar2 + 0x2c) == -1) { // [自动静态注释] 条件判断/分支
LAB__text__005e8d9c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            *(undefined4 *)(pMVar2 + 0x2c) = uVar4;
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(undefined4 *)(lVar7 + lVar6) = 0xffffffff;
          if (*(int *)(pMVar2 + 0x2c) != -1) { // [自动静态注释] 条件判断/分支
            *(undefined4 *)(*(long *)(pMVar2 + 0x20) + (long)*(int *)(pMVar2 + 0x2c) * 0x2000) =
                 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            goto LAB__text__005e8d9c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          *(undefined4 *)(pMVar2 + 0x28) = uVar4;
          *(undefined4 *)(pMVar2 + 0x2c) = uVar4;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      lVar5 = lVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = lVar6 + 0x2000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar5 != 0x80); // [自动静态注释] 循环/迭代
    FUN__text__001001d0(_DAT_008a5b68,_DAT_008a5b60,&__DT_FINI_ARRAY); // [自动静态注释] 调用尚未恢复正式名称的函数
    __cxa_guard_release(_DAT_008a5b58); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  nn::os::LockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar5 = *(long *)(pMVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = 0xffffffff;
  uVar4 = (undefined4)((ulong)((long)param_1 - lVar5) >> 0xd); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(pMVar2 + 0x2c) == -1) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(pMVar2 + 0x28) = uVar4;
    *(undefined4 *)(pMVar2 + 0x2c) = uVar4;
    nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(*(long *)(pMVar2 + 0x20) + (long)*(int *)(pMVar2 + 0x2c) * 0x2000) = uVar4;
  *(undefined4 *)(pMVar2 + 0x2c) = uVar4;
  nn::os::UnlockMutex(pMVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


