/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F29C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f29c0; name: FUN_.text__005f29c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN__text__005f29c0(long param_1,uint param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar3 = *(ushort **)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar3[1] <= param_2) { // [自动静态注释] 条件判断/分支
    FUN__text__005f33f0(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *_DAT_008a5c70 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uint)*puVar3 <= *_DAT_008a5c70) { // [自动静态注释] 条件判断/分支
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((*(uint *)(param_1 + 0x88) == uVar1) || // [自动静态注释] 条件判断/分支
     (*(uint *)(param_1 + 0x88) = uVar1, *(int *)(param_1 + 0x54) == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005f2a68: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(int *)(param_1 + 0x54) != 0) goto LAB__text__005f2a70; // [自动静态注释] 条件判断/分支
LAB__text__005f2ab0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar5 = (uint *)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__005f2860(param_1,param_1 + 0x58, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(int *)(*(long *)(param_1 + 0x90) + (ulong)*(uint *)(param_1 + 0x88) * 4 +
                                0xc) + param_2 * 8 + 4,puVar5,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(int *)(param_1 + 0x54) == 0) { // [自动静态注释] 条件判断/分支
      lVar6 = (ulong)*(ushort *)(param_1 + 0xa4) << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),lVar6,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__005f2860(param_1,param_1 + 0x58, // [自动静态注释] 调用尚未恢复正式名称的函数
                            *(int *)(param_1 + 0xa0) +
                            *(int *)(*(long *)(param_1 + 0x90) +
                                     (ulong)*(uint *)(param_1 + 0x88) * 4 + 0xc),lVar2,lVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__005f2bc0(param_1,lVar2,*(undefined2 *)(param_1 + 0xa4),param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
        (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),lVar2,lVar6,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return *(undefined2 *)(param_1 + 0xa6); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__005f2b08; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = (ulong)*(uint *)(puVar3 + (ulong)uVar1 * 2 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(char *)(param_1 + 0x1c0) != '\0') { // [自动静态注释] 条件判断/分支
      FUN__text__005f2860(param_1,param_1 + 0x58,uVar4,*(undefined8 *)(param_1 + 0x98),4); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__005f2860(param_1,param_1 + 0x58,uVar4,*(undefined4 **)(param_1 + 0x98), // [自动静态注释] 调用尚未恢复正式名称的函数
                          **(undefined4 **)(param_1 + 0x98));
      goto LAB__text__005f2a68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(ulong *)(param_1 + 0x98) = uVar4 + (long)puVar3;
    if (*(int *)(param_1 + 0x54) == 0) goto LAB__text__005f2ab0; // [自动静态注释] 条件判断/分支
LAB__text__005f2a70: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar5 = (uint *)(*(long *)(param_1 + 0x98) + (ulong)param_2 * 8 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f2bc0(param_1,(ulong)*puVar5 + *(long *)(param_1 + 0x98),(short)puVar5[1], // [自动静态注释] 调用尚未恢复正式名称的函数
                      (ulong)param_2,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__005f2b08: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return *(undefined2 *)((long)puVar5 + 6); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


