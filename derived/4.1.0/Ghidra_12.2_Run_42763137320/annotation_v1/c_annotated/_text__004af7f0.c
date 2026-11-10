/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003AF7F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004af7f0; name: FUN_.text__004af7f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004af7f0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = *(uint *)(_DAT_008a45b0 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = FUN__text__00400f80(0x10,(ulong)uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(param_1 + 0x20) = lVar2;
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    uVar4 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0xc0) = uVar4;
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x10) = lVar2;
  *(long *)(param_1 + 0x18) = lVar2;
  *(uint *)(param_1 + 0x30) = uVar5;
  *(ulong *)(param_1 + 0x28) = lVar2 + (ulong)uVar5;
  puVar3 = (undefined8 *)FUN__text__00400f80(0,0x300); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 **)(param_1 + 0x50) = puVar3;
  if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 **)(param_1 + 0x48) = puVar3;
    *(undefined4 *)(param_1 + 0x58) = 0x20;
    do { // [自动静态注释] 循环/迭代
      puVar1 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar1 = puVar1 + 3;
      uVar5 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3 = puVar1 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar5 < *(uint *)(param_1 + 0x58)); // [自动静态注释] 循环/迭代
    *puVar1 = 0;
    puVar3 = (undefined8 *)FUN__text__00400f80(0,0x300); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 **)(param_1 + 0x78) = puVar3;
    if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 **)(param_1 + 0x70) = puVar3;
      *(undefined4 *)(param_1 + 0x80) = 0x20;
      do { // [自动静态注释] 循环/迭代
        puVar1 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar1 = puVar1 + 3;
        uVar5 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar3 = puVar1 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar5 < *(uint *)(param_1 + 0x80)); // [自动静态注释] 循环/迭代
      *puVar1 = 0;
      uVar4 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0xc0) = uVar4;
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


