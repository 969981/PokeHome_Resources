/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004711D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005711d0; name: FUN_.text__005711d0
 */


undefined8 FUN__text__005711d0(long param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pcVar1 = (char *)((long)param_2 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 5);
  uVar4 = strlen(pcVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0x102 < uVar4) { // [自动静态注释] 条件判断/分支
    uVar4 = 0x103; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
    uVar6 = uVar4 & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar4 < 4) { // [自动静态注释] 条件判断/分支
      uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        pcVar2 = pcVar1 + uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pcVar3 = (char *)(param_1 + 0x20 + uVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar7 = uVar7 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *pcVar3 = *pcVar2;
        pcVar3[1] = pcVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pcVar3[2] = pcVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pcVar3[3] = pcVar2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while ((uVar4 & 0x1fc) != uVar7); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
      puVar8 = (undefined1 *)((long)param_2 + uVar7 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar9 = (undefined1 *)(uVar7 + param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar6 = uVar6 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar9 = puVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar6 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x20 + uVar4) = 0;
  sVar5 = strlen(pcVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x123) = 0;
  pcVar1 = pcVar1 + ((int)sVar5 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(char *)(param_1 + 0x124) = *pcVar1;
  *(char *)(param_1 + 0x125) = pcVar1[1];
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(pcVar1 + 2);
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


