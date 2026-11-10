/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002F8110
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f8110; name: FUN_.text__003f8110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__003f8110(long *param_1,long param_2,int param_3,long param_4,undefined4 param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined4 param_6,uint param_7,ulong param_8,undefined4 *param_9,long *param_10, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   undefined1 *param_11) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_10 = 0;
  *param_11 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = param_1 + 0x55; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_3 != -1) && ((char)param_1[0xc0] != '\0')) { // [自动静态注释] 条件判断/分支
    uVar4 = FUN__text__003fecb0(plVar1,param_3,param_4,param_5,param_6,param_7 & 1,param_9,&local_68 // [自动静态注释] 调用尚未恢复正式名称的函数
                               ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((param_8 & 1) == 0) { // [自动静态注释] 条件判断/分支
LAB__text__003f81d0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x50))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar8 == (undefined8 *)0x0) goto LAB__text__003f836c; // [自动静态注释] 条件判断/分支
    if (local_68 == 0) { // [自动静态注释] 条件判断/分支
      FUN__text__003fe960(plVar1,*param_9,param_6,&local_68); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (local_68 == 0) { // [自动静态注释] 条件判断/分支
        lVar6 = puVar8[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar8[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
          FUN__text__003fe878(plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__00400fc0(7,puVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
        goto LAB__text__003f8364; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      lVar6 = *(long *)(local_68 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(undefined4 *)(local_68 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *param_9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5 = (long *)param_1[200]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        lVar7 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar7 == 0) { // [自动静态注释] 条件判断/分支
          param_1[199] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        param_1[200] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *plVar5 = 0;
        *(int *)(param_1 + 0xc6) = (int)param_1[0xc6] + -1;
      } // [自动静态注释] 作用域/控制流边界
      uVar3 = *(uint *)(param_2 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(plVar5 + 2) = uVar4;
      *(undefined4 *)((long)plVar5 + 0x14) = uVar2;
      plVar5[1] = param_4 + lVar7 * (ulong)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = _DAT_008a4400; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5[5] = (long)plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5[8] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5[3] = lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5[4] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)(plVar5 + 9) = *(byte *)(plVar5 + 9) & 0xfc;
      *param_10 = (long)plVar5;
      FUN__text__003fef00(plVar1,local_68,plVar5,param_3,param_4,*param_9); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(puVar8 + 2) = 0;
      puVar8[1] = local_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)puVar8 + 0x14) = *(byte *)((long)puVar8 + 0x14) & 0xf8;
      lVar6 = *param_10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(lVar6 + 0x38) == 0) { // [自动静态注释] 条件判断/分支
        *(undefined8 **)(lVar6 + 0x38) = puVar8;
        puVar8[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar8[3] = *(long *)(lVar6 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 **)(lVar6 + 0x38) = puVar8;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar8[1] = local_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(puVar8 + 2) = uVar4;
      *(byte *)((long)puVar8 + 0x14) = *(byte *)((long)puVar8 + 0x14) & 0xf8;
      lVar6 = *(long *)(local_68 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
        if (*(long *)(lVar6 + 0x38) == 0) { // [自动静态注释] 条件判断/分支
          *(undefined8 **)(lVar6 + 0x38) = puVar8;
          puVar8[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          puVar8[3] = *(long *)(lVar6 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 **)(lVar6 + 0x38) = puVar8;
        } // [自动静态注释] 作用域/控制流边界
        *param_11 = 1;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *puVar8 = 0;
    plVar1 = (long *)(param_2 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(param_2 + 0xd0) != 0) { // [自动静态注释] 条件判断/分支
      plVar1 = *(long **)(param_2 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *plVar1 = (long)puVar8;
    *(undefined8 **)(param_2 + 200) = puVar8;
    puVar8[4] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (local_68 != 0) { // [自动静态注释] 条件判断/分支
      if (*(long *)(local_68 + 0x10) == 0) goto LAB__text__003f81d0; // [自动静态注释] 条件判断/分支
      FUN__text__003fe878(plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
LAB__text__003f8364: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar8 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
LAB__text__003f836c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return puVar8; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


