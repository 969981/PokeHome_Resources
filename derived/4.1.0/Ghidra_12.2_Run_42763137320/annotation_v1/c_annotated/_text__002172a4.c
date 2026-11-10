/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001172A4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002172a4; name: FUN_.text__002172a4
 */


void FUN__text__002172a4(long param_1,uint param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = FUN__text__002155e0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((param_2 < 0xe) && ((uVar2 & 1) != 0)) && // [自动静态注释] 条件判断/分支
     (uVar1 = FUN__text__002156ec(param_1), param_3 < uVar1)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = *(long *)(param_1 + 0x90) + (ulong)param_2 * 0x960 + (ulong)param_3 * 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar3 + 0x4c) = 0;
    *(undefined8 *)(lVar3 + 0x44) = 0;
    *(undefined8 *)(lVar3 + 0x3c) = 0;
    *(undefined8 *)(lVar3 + 0x34) = 0;
    *(undefined8 *)(lVar3 + 0x2c) = 0;
    *(undefined8 *)(lVar3 + 0x24) = 0;
    *(undefined8 *)(lVar3 + 0x1c) = 0;
    *(undefined8 *)(lVar3 + 0x14) = 0;
    *(undefined8 *)(lVar3 + 0xc) = 0;
    *(undefined8 *)(lVar3 + 4) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


