/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E4B20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e4b20; name: FUN_.text__005e4b20
 */


void FUN__text__005e4b20(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MultiWaitHolderType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  MultiWaitHolderType *pMVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  MultiWaitHolderType *pMVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  MultiWaitHolderType local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = *(MultiWaitHolderType **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pMVar4 = pMVar1 + lVar2 * 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pMVar5 = pMVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__005e4b7c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (pMVar5 != pMVar4) { // [自动静态注释] 条件判断/分支
      local_50 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (param_2 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(param_2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      local_48 = (MultiWaitHolderType)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      nn::os::InitializeMultiWaitHolder // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                ((MultiWaitHolderType *)&local_90,(EventType *)(param_2 + 0x60)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      nn::os::SetMultiWaitHolderUserData((MultiWaitHolderType *)&local_90,(ulong)&local_90); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(pMVar5 + 0x10) = local_80;
      *(undefined8 *)(pMVar5 + 0x18) = uStack_78;
      *(undefined8 *)pMVar5 = local_90;
      *(undefined8 *)(pMVar5 + 8) = uStack_88;
      *(undefined8 *)(pMVar5 + 0x30) = local_60;
      *(undefined8 *)(pMVar5 + 0x38) = uStack_58;
      *(undefined8 *)(pMVar5 + 0x20) = local_70;
      *(undefined8 *)(pMVar5 + 0x28) = uStack_68;
      if (*(long *)(pMVar5 + 0x40) != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*(long *)(pMVar5 + 0x40) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined8 *)(pMVar5 + 0x40) = 0;
      } // [自动静态注释] 作用域/控制流边界
      lVar2 = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(pMVar5 + 0x40) = lVar2;
      pMVar5[0x48] = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = nn::os::GetMultiWaitHolderUserData((MultiWaitHolderType *)&local_90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
        nn::os::SetMultiWaitHolderUserData((MultiWaitHolderType *)&local_90,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)&local_90); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar2 = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      if (local_50 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = lVar2 * 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*(long *)(pMVar5 + 0x40) == 0) goto LAB__text__005e4b7c; // [自动静态注释] 条件判断/分支
      pMVar5 = pMVar5 + 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = lVar3 + -0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar3 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar6 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x30);
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  *(long *)(pMVar1 + lVar2 * 0x50 + 0x40) = param_2;
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(param_2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pMVar1[lVar2 * 0x50 + 0x48] = (MultiWaitHolderType)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::InitializeMultiWaitHolder(pMVar4,(EventType *)(param_2 + 0x60)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::SetMultiWaitHolderUserData(pMVar4,(ulong)pMVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


