/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00117058
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00217058; name: FUN_.text__00217058
 */


byte FUN__text__00217058(long param_1,undefined8 *param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar4 = FUN__text__002155e0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_2 != (undefined8 *)0x0 && (5 >= param_3 && ((bVar4 ^ 1) & 1) == 0)) { // [自动静态注释] 条件判断/分支
    lVar5 = *(long *)(param_1 + 0x88) + (ulong)param_3 * 100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(undefined8 *)(lVar5 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_2 = *(undefined8 *)(lVar5 + 0x38);
    param_2[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(undefined8 *)(lVar5 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined8 *)(lVar5 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined8 *)(lVar5 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[4] = *(undefined8 *)(lVar5 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[5] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[2] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[3] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(undefined8 *)(lVar5 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined8 *)(lVar5 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined8 *)(lVar5 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[8] = *(undefined8 *)(lVar5 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[9] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[6] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[7] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return ((param_2 == (undefined8 *)0x0 | 5 < param_3 | bVar4 ^ 1) ^ 0xff) & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


