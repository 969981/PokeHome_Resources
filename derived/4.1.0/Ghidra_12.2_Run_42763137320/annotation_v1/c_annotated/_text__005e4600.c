/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E4600
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e4600; name: FUN_.text__005e4600
 */


void FUN__text__005e4600(long *param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar9 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 3)) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_2 >> 0x3d != 0) { // [自动静态注释] 条件判断/分支
    auVar9 = FUN__text__005e4ff4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_58 = auVar9._8_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = auVar9._0_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_48 = 0x5e474c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pMVar1 = (MutexType *)(lVar2 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = (undefined1 *)((long)register0x00000008 + -0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_38 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = nn::os::IsMutexLockedByCurrentThread(pMVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar7 & 1) == 0) { // [自动静态注释] 条件判断/分支
      nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar4 = *(undefined8 **)(lVar2 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar4 == *(undefined8 **)(lVar2 + 0xf8)) { // [自动静态注释] 条件判断/分支
        FUN__text__005e5380(lVar2 + 0xe8,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
        nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar7 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar2 + 0x100)
        ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        *puVar4 = local_58;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
        *(undefined8 **)(lVar2 + 0xf0) = puVar4 + 1;
        nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar4 = *(undefined8 **)(lVar2 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar4 == *(undefined8 **)(lVar2 + 0x128)) { // [自动静态注释] 条件判断/分支
        FUN__text__005e5380(lVar2 + 0x118,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar7 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar2 + 0x130)
        ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        *puVar4 = local_58;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
        *(undefined8 **)(lVar2 + 0x120) = puVar4 + 1;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar8 = param_1[1] - *param_1 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 3,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar5 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = (undefined8 *)(lVar8 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar3 != puVar5) goto LAB__text__005e4670; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar5 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = (undefined8 *)(lVar2 + lVar8 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar3 != puVar5) { // [自动静态注释] 条件判断/分支
LAB__text__005e4670: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar8 = *(long *)(uVar7 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (lVar8 == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        *(long *)((uVar7 | 0x18) + lVar8 * 8) = param_1[3];
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        puVar3 = puVar3 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar6 = puVar6 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar6 = *puVar3;
        lVar8 = *(long *)(uVar7 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(uVar7 + 0x98) = lVar8;
      } while (puVar3 != puVar5); // [自动静态注释] 循环/迭代
      puVar3 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_1 = (long)puVar6;
      param_1[1] = (long)puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar8 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[2] = lVar2 + param_2 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x005e472c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = (long)puVar4;
  param_1[1] = (long)puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = lVar2 + param_2 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x005e472c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005e46f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar3,lVar8 - (long)puVar3,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


