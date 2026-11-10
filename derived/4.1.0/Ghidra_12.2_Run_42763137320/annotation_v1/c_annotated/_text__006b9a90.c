/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B9A90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b9a90; name: FUN_.text__006b9a90
 */


void FUN__text__006b9a90(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short *psVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short *psVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  psVar6 = *(short **)(param_2 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*psVar6 == 2) { // [自动静态注释] 条件判断/分支
    puVar2 = (undefined8 *)FUN__text__006a0f04(0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      puVar2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar2 = 0;
      puVar2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 **)(param_1 + 0xf8) = puVar2;
    uVar5 = *(undefined8 *)(psVar6 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar1 = FUN__text__006eb7ec(uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar2 = (undefined8 *)FUN__text__006a0f04(0x48); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      FUN__text__006eb878(puVar2,5,3,iVar1 + -1); // [自动静态注释] 调用尚未恢复正式名称的函数
      *puVar2 = 0x89e098;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006c2ea8(puVar2,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 **)(*(long *)(param_1 + 0xf8) + 0x18) = puVar2;
    psVar4 = *(short **)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*psVar6 != 1) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 0xf8) = 0;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    puVar2 = (undefined8 *)FUN__text__006a0f04(0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      puVar2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar2 = 0;
      puVar2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 **)(param_1 + 0xf8) = puVar2;
    lVar3 = FUN__text__006a0f04(0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006c1de4(0,0,lVar3,5,3,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006c1e84(lVar3,*(undefined8 *)(psVar6 + 0xc)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(*(long *)(param_1 + 0xf8) + 0x18) = lVar3;
    psVar4 = *(short **)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (psVar4 != (short *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_1 + 0xf0) = 4;
    *psVar4 = *psVar6;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


