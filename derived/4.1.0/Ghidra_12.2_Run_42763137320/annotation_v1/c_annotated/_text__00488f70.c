/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00388F70
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00488f70; name: FUN_.text__00488f70
 */


ulong FUN__text__00488f70(ulong param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar2 = (int)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar2 != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = param_1 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = (uint *)((ulong)(iVar2 - 1) * 0x20 + 0x73b770); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((param_2 & 0xffff & *puVar4) != 0) { // [自动静态注释] 条件判断/分支
        uVar1 = 1 << (ulong)(*puVar4 >> 0x10 & 0x1f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar3 = uVar3 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1 = (ulong)(uVar1 | (uint)param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4 = puVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar3 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


