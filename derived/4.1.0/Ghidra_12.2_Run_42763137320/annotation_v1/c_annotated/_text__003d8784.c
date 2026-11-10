/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D8784
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d8784; name: FUN_.text__003d8784
 */


undefined8 FUN__text__003d8784(long param_1,undefined4 *param_2,byte *param_3,byte *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte *pbVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_28 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_2 + 2) = 0;
  pbVar3 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_3 != (byte *)0x0) && (param_4 != param_3)) { // [自动静态注释] 条件判断/分支
    if (*param_3 < 0x21) { // [自动静态注释] 条件判断/分支
      if ((((ulong)((long)param_4 - (long)param_3) < 2) || (*param_3 != 0x20)) || // [自动静态注释] 条件判断/分支
         (param_3[1] < 0x21)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar3 = (byte *)FUN__text__003e4220(local_28,param_2 + 2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar4 = local_28[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pbVar3 = param_3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  iVar2 = *(int *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = uVar4;
  *(int *)(param_1 + 8) = iVar2 + ((int)pbVar3 - (int)param_3);
  pbVar1 = (byte *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pbVar3 != param_4) { // [自动静态注释] 条件判断/分支
    pbVar1 = pbVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(byte **)(param_2 + 4) = pbVar1;
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


