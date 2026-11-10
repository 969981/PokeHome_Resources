/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00365A90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00465a90; name: FUN_.text__00465a90
 */


void FUN__text__00465a90(long *param_1,undefined4 param_2,uint param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = FUN__text__004ceab0(param_1 + 0x17,param_4,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    *(byte *)(lVar3 + 0x20) =
         *(byte *)(lVar3 + 0x20) & ((byte)param_3 ^ 0xff) | (byte)param_3 & (byte)param_2;
  } // [自动静态注释] 作用域/控制流边界
  iVar2 = (**(code **)(*param_1 + 0x80))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_1 + 0x80))(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (param_4 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__004cfa40(param_1 + 0x17,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar2 = (**(code **)(*param_1 + 0x80))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar2 = (**(code **)(*param_1 + 0x80))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((((iVar2 == 0) || (iVar2 = (**(code **)(*param_1 + 0x80))(param_1), iVar2 == 10)) || // [自动静态注释] 条件判断/分支
      (param_1[0xf] == 0)) || ((*(uint *)(param_1 + 0x13) & 0x1f000) != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar1 = param_1 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((param_1[0xb] != 0) && ((*(byte *)(param_1[0xb] + 3) >> 5 & 1) != 0)) || // [自动静态注释] 条件判断/分支
       (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x1d), (uVar4 & 1) != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3 = param_3 & 0xfffffffe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (((param_1[0xb] != 0) && ((*(byte *)(param_1[0xb] + 3) >> 6 & 1) != 0)) || // [自动静态注释] 条件判断/分支
       (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x1e), (uVar4 & 1) != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3 = param_3 & 0xfffffffd; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (((param_1[0xb] != 0) && (*(char *)(param_1[0xb] + 3) < '\0')) || // [自动静态注释] 条件判断/分支
       (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x1f), (uVar4 & 1) != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3 = param_3 & 0xfffffffb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (((param_1[0xb] != 0) && ((*(byte *)(param_1[0xb] + 4) & 1) != 0)) || // [自动静态注释] 条件判断/分支
       (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x20), (uVar4 & 1) != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3 = param_3 & 0xfffffff7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (((param_1[0xb] != 0) && ((*(byte *)(param_1[0xb] + 4) >> 1 & 1) != 0)) || // [自动静态注释] 条件判断/分支
       (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x21), (uVar4 & 1) != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3 = param_3 & 0xffffffef; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (param_3 != 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x00465c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x100))(param_1,param_2,param_3,param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


