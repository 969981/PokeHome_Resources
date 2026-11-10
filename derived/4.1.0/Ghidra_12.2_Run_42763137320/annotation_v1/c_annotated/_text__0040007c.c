/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0030007C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040007c; name: FUN_.text__0040007c
 */


long FUN__text__0040007c(long *param_1,long param_2,int param_3,long param_4,undefined4 param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 param_6,uint param_7,ulong param_8,undefined4 *param_9, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        long *param_10) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_10 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = param_1 + 0x55; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_3 != -1) && ((char)param_1[0xc0] != '\0')) { // [自动静态注释] 条件判断/分支
    uVar5 = FUN__text__003fecb0(plVar1,param_3,param_4,param_5,param_6,param_7 & 1,param_9,&local_68 // [自动静态注释] 调用尚未恢复正式名称的函数
                               ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((param_8 & 1) == 0) { // [自动静态注释] 条件判断/分支
LAB__text__00400124: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar6 = (**(code **)(*param_1 + 0x50))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
      if (local_68 == 0) { // [自动静态注释] 条件判断/分支
        FUN__text__003fe960(plVar1,*param_9,param_6,&local_68); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (local_68 == 0) { // [自动静态注释] 条件判断/分支
          lVar7 = *(long *)(lVar6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(lVar6 + 8) = 0;
          if (lVar7 != 0) { // [自动静态注释] 条件判断/分支
            FUN__text__003fe878(plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
          FUN__text__00400fc0(7,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
          goto LAB__text__004001d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        uVar2 = *(undefined4 *)(local_68 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = *param_9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = *(uint *)(param_2 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_1[200] = *(long *)(local_68 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(param_1 + 199) = uVar2;
        *(undefined4 *)((long)param_1 + 0x63c) = uVar3;
        param_1[0xc6] = param_4 + lVar7 * (ulong)uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *param_10 = (long)(param_1 + 0xc6);
        FUN__text__003fef00(plVar1,local_68,param_1 + 0xc6,param_3,param_4,*param_9); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(long *)(lVar6 + 8) = local_68;
      *(undefined4 *)(lVar6 + 0x10) = uVar5;
      *(byte *)(lVar6 + 0x14) = *(byte *)(lVar6 + 0x14) & 0xf8;
      goto LAB__text__004001d4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (local_68 != 0) goto LAB__text__004001c8; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else if (local_68 != 0) { // [自动静态注释] 条件判断/分支
    if (*(long *)(local_68 + 0x10) == 0) goto LAB__text__00400124; // [自动静态注释] 条件判断/分支
LAB__text__004001c8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__003fe878(plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
LAB__text__004001d0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__004001d4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return lVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


