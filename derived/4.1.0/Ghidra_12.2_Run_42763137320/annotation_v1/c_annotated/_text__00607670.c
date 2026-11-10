/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00507670
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00607670; name: FUN_.text__00607670
 */


void FUN__text__00607670(byte *param_1,undefined2 *param_2,uint param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        byte param_5,int param_6,undefined4 param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_58 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_5 & 0xfe) == 0) { // [自动静态注释] 条件判断/分支
    bVar6 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__006029e4(param_3 & 0xffff); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__00602a78(param_3,param_4,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar5 = FUN__text__005ff43c(uVar3,uVar4,2); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_58[0] = iVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58[1] = FUN__text__005ff554(uVar3,uVar4,2); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar1 = local_58[bVar6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar1 != param_6) { // [自动静态注释] 条件判断/分支
    if (local_58[1] == param_6) { // [自动静态注释] 条件判断/分支
      bVar6 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar1 = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    bVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar5 != param_6) { // [自动静态注释] 条件判断/分支
      param_6 = iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar2 = bVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    bVar6 = bVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = bVar6;
  *param_2 = (short)param_6;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


