/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002F0FF8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f0ff8; name: FUN_.text__003f0ff8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__003f0ff8(long param_1,undefined8 param_2,ulong param_3,long *param_4,long param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x60)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar3 = (long *)FUN__text__003f0e70(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    iVar2 = *(int *)((long)plVar3 + 0xc) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)((long)plVar3 + 0xc) < 1) { // [自动静态注释] 条件判断/分支
      iVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(int *)((long)plVar3 + 0xc) = iVar2;
    local_48 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*param_4 != 0) { // [自动静态注释] 条件判断/分支
      plVar1 = (long *)plVar3[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar1 < (long *)plVar3[0xb]) { // [自动静态注释] 条件判断/分支
        uVar6 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = uVar6 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long *)(uVar6 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        *(long *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = plVar3[0xc];
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
        *plVar1 = 0;
        plVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((code *)param_4[2] != (code *)0x0) { // [自动静态注释] 条件判断/分支
          (*(code *)param_4[2])(param_4 + 4,plVar1 + 4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          lVar4 = param_4[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar1[1] = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar1[3] = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar4 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar1[2] = param_4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *plVar1 = lVar4;
        } // [自动静态注释] 作用域/控制流边界
        plVar1[0x10] = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
        plVar3[10] = (long)(plVar1 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__003f12f0(plVar3 + 9,param_4,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
      if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
        uVar5 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__003f0aa0(plVar3,1); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar4 = _DAT_0089f5c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*plVar3 != 0) { // [自动静态注释] 条件判断/分支
          lVar4 = *plVar3 + 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__003f1ad0(param_1 + 8,lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar5 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 *)((long)plVar3 + 0x11) = 1;
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__003f1100; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__003f1100: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x60)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


