/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0059D860
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069d860; name: FUN_.text__0069d860
 */


void FUN__text__0069d860(long param_1,long param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar4 = *(byte *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uint)*(byte *)(param_1 + 1) <= (param_3 & 0xff)) { // [自动静态注释] 条件判断/分支
    bVar4 = (byte)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(byte *)(param_1 + 1) = bVar4;
  if (0 < (int)param_3) { // [自动静态注释] 条件判断/分支
    lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = puVar1[-3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar2 = puVar1[-4];
      puVar2[1] = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = puVar1[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = *(long *)(param_1 + 8) + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar3 + 8) = puVar1[-2];
      *(undefined4 *)(lVar3 + 0xc) = uVar6;
      uVar6 = puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = *(long *)(param_1 + 8) + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar3 + 0x10) = *puVar1;
      *(undefined4 *)(lVar3 + 0x14) = uVar6;
      uVar6 = puVar1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = *(long *)(param_1 + 8) + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = lVar5 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar3 + 0x18) = puVar1[2];
      *(undefined4 *)(lVar3 + 0x1c) = uVar6;
    } while ((ulong)param_3 * 0x20 != lVar5); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


