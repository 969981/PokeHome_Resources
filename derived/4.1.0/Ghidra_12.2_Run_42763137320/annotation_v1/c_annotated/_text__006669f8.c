/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005669F8
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006669f8; name: FUN_.text__006669f8
 */


undefined8 FUN__text__006669f8(undefined8 param_1,undefined1 *param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte abStack_b0 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_3 & 0xffffffffffffff01) != 1) { // [自动静态注释] 条件判断/分支
    return 0x2b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  memset(abStack_b0,0,0x80); // [自动静态注释] 内存复制、清零或移动
  param_3 = param_3 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__006668b8(param_1,abStack_b0,param_3 >> 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar2 == 0) { // [自动静态注释] 条件判断/分支
    if (param_3 != 0) { // [自动静态注释] 条件判断/分支
      pbVar3 = abStack_b0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        bVar1 = *pbVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_3 = param_3 - 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar4 = *(undefined1 *)((ulong)(bVar1 >> 4) + 0x71e008);
        param_2 = puVar4 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar4[1] = *(undefined1 *)(((ulong)bVar1 & 0xf) + 0x71e008); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pbVar3 = pbVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar4 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (param_3 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_2 = 0;
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


