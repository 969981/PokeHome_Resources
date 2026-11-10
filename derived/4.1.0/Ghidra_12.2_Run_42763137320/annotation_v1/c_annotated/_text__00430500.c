/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00330500
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00430500; name: FUN_.text__00430500
 */


undefined8 FUN__text__00430500(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = (undefined8 *)FUN__text__00400f80(0,0xc0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 **)(param_1 + 0x28) = puVar2;
  if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 **)(param_1 + 0x20) = puVar2;
    *(undefined4 *)(param_1 + 0x30) = 8;
    do { // [自动静态注释] 循环/迭代
      puVar1 = puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar1 = puVar1 + 3;
      uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = puVar1 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar3 < *(uint *)(param_1 + 0x30)); // [自动静态注释] 循环/迭代
    *puVar1 = 0;
    puVar2 = (undefined8 *)FUN__text__00400f80(0,0x100); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 **)(param_1 + 0x58) = puVar2;
    if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 **)(param_1 + 0x50) = puVar2;
      *(undefined4 *)(param_1 + 0x60) = 8;
      do { // [自动静态注释] 循环/迭代
        puVar1 = puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar1 = puVar1 + 4;
        uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2 = puVar1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar3 < *(uint *)(param_1 + 0x60)); // [自动静态注释] 循环/迭代
      *puVar1 = 0;
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


