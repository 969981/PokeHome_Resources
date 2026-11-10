/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00500044
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00600044; name: FUN_.text__00600044
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00600044(undefined4 param_1,undefined4 param_2,undefined2 param_3,byte param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((param_4 != 6) && (param_4 < 8)) && // [自动静态注释] 条件判断/分支
     (plVar3 = *(long **)(_DAT_008a5d78 + (ulong)param_4 * 8), plVar3 != (long *)0x0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = plVar3 + 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar4 + 0x10))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_4c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_44 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3,&local_4c,param_1,param_2,param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = (undefined4)local_4c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar4 + 0x18))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((uVar2 & 1) != 0) { // [自动静态注释] 条件判断/分支
      return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


