/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00419C90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00519c90; name: FUN_.text__00519c90
 */


void FUN__text__00519c90(long *param_1,uint *param_2,ulong *param_3,byte param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  for (puVar3 = (undefined8 *)*param_1; puVar3 != (undefined8 *)0x0; // [自动静态注释] 循环/迭代
      puVar3 = (undefined8 *)puVar3[0x70]) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar3[0x72] != 0) goto LAB__text__00519d40; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  puVar3 = (undefined8 *)FUN__text__00400f80(0xb,0x398); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar3[0x70] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[0x1c] = puVar3 + 0xe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[0x38] = puVar3 + 0x2a; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[0x2a] = puVar3 + 0x1c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[0x54] = puVar3 + 0x46; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[0x46] = puVar3 + 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[0x72] = puVar3 + 0x62; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar3 = 0;
    puVar3[0xe] = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[0x62] = puVar3 + 0x54; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(puVar3 + 0x71) = 8;
    if (*param_1 == 0) { // [自动静态注释] 条件判断/分支
      *param_1 = (long)puVar3;
      puVar3[0x70] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = (undefined8 *)puVar3[0x72]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar3[0x70] = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_1 = (long)puVar3;
LAB__text__00519d40: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar2 = (undefined8 *)puVar3[0x72]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      puVar3[0x72] = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar2 = 0;
      *(int *)(puVar3 + 0x71) = *(int *)(puVar3 + 0x71) + -1;
      *(undefined4 *)(puVar2 + 0xb) = 0;
      puVar2[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)((long)puVar2 + 100) = 0;
      puVar2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)puVar2 + 0x6d) = param_4;
      *puVar2 = 0;
      puVar2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)((long)puVar2 + 0x5c) = 0x7f7fffff7f7fffff;
      *(undefined1 *)((long)puVar2 + 0x6c) = 0xff;
      *(undefined1 *)((long)puVar2 + 0x6e) = 1;
      puVar2[6] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[7] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)puVar2 + 0x6f) = *(byte *)((long)puVar2 + 0x6f) & 0xfc;
      puVar2[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[10] = (((((((((((uVar4 & 0xff ^ ((ulong)param_4 ^ 0xaf63bd4c8601b7df) * 0x100000001b3) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                             * 0x100000001b3 ^ uVar4 >> 8 & 0xff) * 0x100000001b3 ^
                           uVar4 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x18 & 0xff) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                          0x100000001b3 ^ uVar4 >> 0x20 & 0xff) * 0x100000001b3 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        uVar4 >> 0x28 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x30 & 0xff) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                       0x100000001b3 ^ uVar4 >> 0x38) * 0x100000001b3 ^ (ulong)uVar1 & 0xff) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     0x100000001b3 ^ (ulong)(uVar1 >> 8) & 0xff) * 0x100000001b3 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   (ulong)(uVar1 >> 0x10) & 0xff) * 0x100000001b3 ^ (ulong)(uVar1 >> 0x18); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


