/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DD450
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd450; name: FUN_.text__004dd450
 */


undefined8 FUN__text__004dd450(long *param_1,int param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 5) = 0;
    if (param_1[3] == 0) { // [自动静态注释] 条件判断/分支
      uVar5 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar5 = *(undefined2 *)(param_1[3] + 0x310); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined2 *)((long)param_1 + 0x54) = uVar5;
    uVar4 = (**(code **)(*param_1 + 0x140))(param_1,0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = (int)uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (param_2 == 2) { // [自动静态注释] 条件判断/分支
      *(byte *)(param_1 + 4) =
           (byte)(*(uint *)(param_1[3] + 0x313) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Could not recover jumptable at 0x004dd52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*(long *)param_1[0xb] + 0x68))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (param_2 != 1) goto LAB__text__004dd4c4; // [自动静态注释] 条件判断/分支
    if ((param_3 & 1) != 0) { // [自动静态注释] 条件判断/分支
      iVar2 = FUN__text__004ddcf4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar3 = (**(code **)(*param_1 + 0x140))(param_1,iVar2,param_1 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 != 1) { // [自动静态注释] 条件判断/分支
        return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar6 = param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(lVar6 + 0x30c) = iVar2 - (int)param_1[5];
      puVar1 = (uint *)(lVar6 + 0x313); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar1 = *puVar1 & 0xfe3fffff;
      goto LAB__text__004dd4c4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    plVar7 = param_1 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = (**(code **)(*param_1 + 0x140))(param_1,(int)*plVar7,plVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar2 == 1) goto LAB__text__004dd4c4; // [自动静态注释] 条件判断/分支
    uVar4 = (**(code **)(*param_1 + 0x140))(param_1,0,plVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = (int)uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (iVar2 != 1) { // [自动静态注释] 条件判断/分支
    return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
LAB__text__004dd4c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Could not recover jumptable at 0x004dd4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(long *)param_1[0xb] + 0x68))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


