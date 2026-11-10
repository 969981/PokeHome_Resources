/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00368FA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00468fa0; name: FUN_.text__00468fa0
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00468fa0(long param_1,undefined4 param_2,uint param_3,undefined4 param_4,ulong param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x58) == 0) { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined8 *)FUN__text__00400f80(2,0x28); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar1 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 0x58) = 0;
      return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    puVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar1 = 0;
    puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 **)(param_1 + 0x58) = puVar1;
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__004324b0(param_1 + 0x48,0,*(undefined4 *)(param_1 + 0x20),param_2,param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                              param_4,param_5 & 0xffffffff,param_6,param_7,param_8,param_9,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((int)uVar2 == 1) { // [自动静态注释] 条件判断/分支
    puVar3 = *(ulong **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar3 == (ulong *)0x0) { // [自动静态注释] 条件判断/分支
      puVar3 = (ulong *)FUN__text__00400f80(2,0x28); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (puVar3 == (ulong *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x58) = 0;
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      puVar3[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar3 = 0;
      puVar3[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ulong **)(param_1 + 0x58) = puVar3;
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = *puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = 1L << (param_5 & 0x3f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar3 = uVar4 | uVar5;
    if (((uVar4 & uVar5) == 0) && (*(long *)(param_1 + 0x70) != 0)) { // [自动静态注释] 条件判断/分支
      FUN__text__0046c6a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_3 & 0xff) == 4) { // [自动静态注释] 条件判断/分支
      *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x20) = 1;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


