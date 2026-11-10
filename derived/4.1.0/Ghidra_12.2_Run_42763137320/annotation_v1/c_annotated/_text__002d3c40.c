/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001D3C40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d3c40; name: FUN_.text__002d3c40
 */


byte FUN__text__002d3c40(long param_1,uint param_2,uint param_3,byte param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(undefined8 **)(param_1 + 0x270) == *(undefined8 **)(param_1 + 0x278)) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  param_2 = param_2 & 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3 = param_3 & 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4 = *(undefined8 **)(param_1 + 0x270); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    puVar3 = puVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar7 = (int *)*puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar9 = (ushort *)((long)piVar7 - (long)*piVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *puVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 < 7) { // [自动静态注释] 条件判断/分支
      uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__002d3c68: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar5 = (uVar8 != param_3 || uVar6 != param_2) | param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar8 == param_3 && uVar6 == param_2) && (param_4 & 1) == 0) break; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((ulong)puVar9[3] != 0) { // [自动静态注释] 条件判断/分支
        uVar6 = *(uint *)((long)piVar7 + (ulong)puVar9[3]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (uVar2 < 9) { // [自动静态注释] 条件判断/分支
        uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__002d3c68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((ulong)puVar9[4] != 0) { // [自动静态注释] 条件判断/分支
        uVar8 = *(uint *)((long)piVar7 + (ulong)puVar9[4]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if ((uVar2 < 0xb) || ((ulong)puVar9[5] == 0)) goto LAB__text__002d3c68; // [自动静态注释] 条件判断/分支
      bVar1 = *(char *)((long)piVar7 + (ulong)puVar9[5]) != '\0' ^ param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar5 = (uVar8 != param_3 || uVar6 != param_2) | bVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar8 == param_3 && uVar6 == param_2) && (bVar1 & 1) == 0) break; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    puVar4 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (puVar3 != *(undefined8 **)(param_1 + 0x278)); // [自动静态注释] 循环/迭代
  return (bVar5 ^ 1) & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


