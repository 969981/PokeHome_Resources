/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003FD28C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fd28c; name: FUN_.text__004fd28c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004fd28c(long param_1,int *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 auVar1 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38 = (undefined1 *)&local_40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_3c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auVar1 = SEXT816((long)((ulong)*_DAT_008a4b68 * (long)*param_2)) * SEXT816(0x20c49ba5e353f7cf); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = local_40 & ((int)local_40 >> 0x1f ^ 0xffffffffU); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((*(byte *)(param_1 + 0x5a) & 0xe) == 0) && (*(long *)(param_1 + 0x10) == 0)) { // [自动静态注释] 条件判断/分支
    local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
    uVar2 = FUN__text__004fb000(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_28 = (long *)FUN__text__004fb0ac(param_1,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_28 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      FUN__text__004fb1a0(param_1,uVar2,&local_38,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (local_28 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*local_28 + 0x80))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


