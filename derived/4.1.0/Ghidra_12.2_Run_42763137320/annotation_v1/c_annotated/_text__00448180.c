/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00348180
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00448180; name: FUN_.text__00448180
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00448180(long param_1,long param_2,undefined8 param_3,int param_4,undefined4 param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   uint param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(uint *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = (uint)param_2 / uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = (long *)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar2 * uVar1) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    plVar3 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar3 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } while (plVar3[1] != param_2); // [自动静态注释] 循环/迭代
  if (((param_6 & 1) != 0) && (*(long *)(plVar3[2] + 8) != 0)) { // [自动静态注释] 条件判断/分支
    FUN__text__0044af20(*(long *)(plVar3[2] + 8),param_3,param_4,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (((param_4 != 0) && (((param_6 & 0xff) >> 1 & 1) != 0)) && (*(long *)(plVar3[2] + 0x20) != 0)) // [自动静态注释] 条件判断/分支
  { // [自动静态注释] 作用域/控制流边界
    FUN__text__0047d5a8(*(long *)(plVar3[2] + 0x20),param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


