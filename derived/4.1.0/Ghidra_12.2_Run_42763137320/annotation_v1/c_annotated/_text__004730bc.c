/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003730BC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004730bc; name: FUN_.text__004730bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004730bc(uint param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = _DAT_008a48e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined8 *)_DAT_008a48e8[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar3 = (undefined8 *)FUN__text__00400f80(5,0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *puVar3 = puVar2[2];
    puVar2[2] = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = (undefined8 *)puVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar4 = (undefined8 *)_DAT_008a48e8[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *puVar2 = puVar3;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *puVar4 = puVar3;
    puVar3 = (undefined8 *)puVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar2[1] = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2[2] = *puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar3 = 0;
  *(int *)((long)puVar2 + 0x24) = *(int *)((long)puVar2 + 0x24) + 1;
  puVar1 = _DAT_008a48e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = puVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar5 + 8) = param_2;
  *(undefined4 *)(lVar5 + 0x10) = *puVar1;
  *(ushort *)(lVar5 + 0x14) = *(ushort *)(lVar5 + 0x14) & 0xfe00 | (ushort)param_1 & 0xff;
  if (param_1 < 2) { // [自动静态注释] 条件判断/分支
    DAT_00aea838 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


