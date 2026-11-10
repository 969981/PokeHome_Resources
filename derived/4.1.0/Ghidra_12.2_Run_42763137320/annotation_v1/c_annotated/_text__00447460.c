/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00347460
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00447460; name: FUN_.text__00447460
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__00447460(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = (undefined8 *)FUN__text__00400f80(0,0x80); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    *(undefined4 *)(param_1 + 0x20) = 8;
    do { // [自动静态注释] 循环/迭代
      puVar1 = puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar1 = puVar1 + 2;
      uVar4 = uVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = puVar1 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar4 < *(uint *)(param_1 + 0x20)); // [自动静态注释] 循环/迭代
    *puVar1 = 0;
    uVar3 = FUN__text__004474f0(_DAT_008a4b40,0x80); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar5 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
      uVar5 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


