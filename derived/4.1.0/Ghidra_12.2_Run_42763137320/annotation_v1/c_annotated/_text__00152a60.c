/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00052A60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00152a60; name: FUN_.text__00152a60
 */


void FUN__text__00152a60(long *param_1,long *param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined2 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_1 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005beb80(*(undefined8 *)(*param_1 + 0xb0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__005cd4dc(*(undefined8 *)(*param_2 + 0xb0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_34 = CONCAT22(local_34._2_2_,uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__005cd554(*(undefined8 *)(*param_2 + 0xb0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_38 = CONCAT22(local_38._2_2_,uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005bea08(*(undefined8 *)(lVar4 + 0xb0),&local_34,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_34 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005bea4c(*(undefined8 *)(*param_1 + 0xb0),&local_34); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005bea34(*(undefined8 *)(*param_1 + 0xb0),&local_34); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005bd83c(*(undefined8 *)(*param_1 + 0xb0),param_1 + 2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    plVar3 = param_1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(char *)((long)param_1 + 0x14) == '\0') goto LAB__text__00152b30; // [自动静态注释] 条件判断/分支
    plVar3 = (long *)((long)param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005bdfd0(*(undefined8 *)(lVar4 + 0xb0),&local_34,plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__00152b30: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = FUN__text__005cd4dc(*(undefined8 *)(*param_2 + 0xb0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_3c = (float)iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = FUN__text__005cd554(*(undefined8 *)(*param_2 + 0xb0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_40 = (float)iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005bfdc4(*(undefined8 *)(lVar4 + 0xb0),&local_34,&local_38,&local_3c,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_34 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005bd83c(*(undefined8 *)(*param_1 + 0xb0),&local_34); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


