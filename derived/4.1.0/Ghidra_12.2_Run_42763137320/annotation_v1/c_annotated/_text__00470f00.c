/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00370F00
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00470f00; name: FUN_.text__00470f00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00470f00(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = _DAT_008a4cd0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *_DAT_008a4cc8 = 0;
  *puVar2 = 0;
  *_DAT_008a4cd8 = 0;
  puVar4 = (undefined8 *)FUN__text__00400f80(0,0x800); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = _DAT_008a4ce0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 **)(_DAT_008a4ce0 + 0x18) = puVar4;
  if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 **)(lVar3 + 0x10) = puVar4;
  *(undefined4 *)(lVar3 + 0x20) = 0x40;
  do { // [自动静态注释] 循环/迭代
    puVar1 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar1 = puVar1 + 4;
    uVar6 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = puVar1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar6 < *(uint *)(lVar3 + 0x20)); // [自动静态注释] 循环/迭代
  *puVar1 = 0;
  *(undefined8 *)(_DAT_008a4ce8 + 0x20) = 0;
  uVar5 = FUN__text__00405cd4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


