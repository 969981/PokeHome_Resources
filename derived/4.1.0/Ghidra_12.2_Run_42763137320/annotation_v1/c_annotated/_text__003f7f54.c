/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002F7F54
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f7f54; name: FUN_.text__003f7f54
 */


undefined8 * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__003f7f54(long *param_1,long param_2,long param_3,uint param_4,long param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined4 param_6,undefined4 param_7,long *param_8) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_8 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x50))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar1 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    if (*(long *)(param_3 + 0x10) == 0) { // [自动静态注释] 条件判断/分支
      local_68 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__003ff2a0(param_1 + 0x55,param_3,&local_68); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (local_68 == 0) { // [自动静态注释] 条件判断/分支
        lVar2 = puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
          FUN__text__003fe878(param_1 + 0x55); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__00400fc0(7,puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar1 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__003f80e4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = *(long *)(local_68 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)param_1[200]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      lVar4 = *plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
        param_1[199] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      param_1[200] = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar3 = 0;
      *(int *)(param_1 + 0xc6) = (int)param_1[0xc6] + -1;
    } // [自动静态注释] 作用域/控制流边界
    plVar3[1] = param_5 + *(long *)(*(long *)(param_2 + 0x20) + 8) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          (ulong)*(uint *)(param_2 + 0x60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(plVar3 + 2) = param_6;
    *(undefined4 *)((long)plVar3 + 0x14) = param_7;
    plVar3[8] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[5] = (long)plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[3] = lVar2 + (ulong)param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[4] = (long)&LAB__text__003ffabc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)(plVar3 + 9) = *(byte *)(plVar3 + 9) & 0xfc;
    *param_8 = (long)plVar3;
    *(long **)(local_68 + 0x10) = plVar3;
    puVar1[1] = local_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(puVar1 + 2) = param_4;
    *(byte *)((long)puVar1 + 0x14) = *(byte *)((long)puVar1 + 0x14) & 0xf8;
    lVar2 = *param_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(lVar2 + 0x38) == 0) { // [自动静态注释] 条件判断/分支
      *(undefined8 **)(lVar2 + 0x38) = puVar1;
      puVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar1[3] = *(long *)(lVar2 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 **)(lVar2 + 0x38) = puVar1;
    } // [自动静态注释] 作用域/控制流边界
    *puVar1 = 0;
    plVar3 = (long *)(param_2 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(param_2 + 0xb8) != 0) { // [自动静态注释] 条件判断/分支
      plVar3 = *(long **)(param_2 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *plVar3 = (long)puVar1;
    *(undefined8 **)(param_2 + 0xb0) = puVar1;
    puVar1[4] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
LAB__text__003f80e4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return puVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


