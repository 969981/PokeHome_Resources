/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00364BC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00464bc0; name: FUN_.text__00464bc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00464bc0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lStack_40 = param_1 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0046cff0(*_DAT_008a4640,&local_48,param_1 + 0x48,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar1 = *(long **)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((param_4 & 1) == 0) || (plVar2 = *(long **)(param_1 + 0x80), plVar2 == (long *)0x0)) { // [自动静态注释] 条件判断/分支
    if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar1 + 0x148))(plVar1,param_2,param_3,param_4 & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar1 + 0x148))(plVar1,param_2,param_3,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar2 = *(long **)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*plVar2 + 0x148))(plVar2,param_2,param_3,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


