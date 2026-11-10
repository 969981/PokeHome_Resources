/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002CCBD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ccbd0; name: FUN_.text__003ccbd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003ccbd0(long *param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 != lVar7) { // [自动静态注释] 条件判断/分支
    uVar12 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar12 = uVar12 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = *(long *)(uVar12 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = _DAT_0089f6b8 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (lVar5 == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      lVar2 = lVar9 + lVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = lVar4 + lVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)((uVar12 | 0x18) + lVar5 * 8) = param_1[3];
      *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
      *(long *)(lVar2 + -0x110) = lVar1;
      uVar8 = *(undefined8 *)(lVar3 + -0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar3 + -0x108) = 0;
      *(undefined8 *)(lVar2 + -0x100) = 0;
      *(undefined8 *)(lVar2 + -0xf8) = 0;
      *(undefined8 *)(lVar2 + -0xf0) = 0;
      *(undefined8 *)(lVar2 + -0xe8) = 0;
      *(undefined8 *)(lVar2 + -0x108) = uVar8;
      if (*(code **)(lVar3 + -0xe8) != (code *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)(lVar3 + -0xe8))(lVar3 + -0xe0,lVar2 + -0xe0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar8 = *(undefined8 *)(lVar3 + -0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar2 + -0xe8) = *(undefined8 *)(lVar3 + -0xe8);
        uVar10 = *(undefined8 *)(lVar3 + -0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar2 + -0x100) = *(undefined8 *)(lVar3 + -0x100);
        *(undefined8 *)(lVar2 + -0xf8) = uVar8;
        *(undefined8 *)(lVar2 + -0xf0) = uVar10;
        pcVar6 = *(code **)(lVar3 + -0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (pcVar6 != (code *)0x0) { // [自动静态注释] 条件判断/分支
          *(undefined8 *)(lVar3 + -0xf0) = 0;
          *(undefined8 *)(lVar3 + -0xe8) = 0;
          *(undefined8 *)(lVar3 + -0x100) = 0;
          *(undefined8 *)(lVar3 + -0xf8) = 0;
          (*pcVar6)(lVar3 + -0xe0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(lVar2 + -0x80) = 0;
      *(undefined8 *)(lVar2 + -0x70) = 0;
      *(undefined8 *)(lVar2 + -0x68) = 0;
      *(undefined8 *)(lVar2 + -0x78) = 0;
      if (*(code **)(lVar3 + -0x68) != (code *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)(lVar3 + -0x68))(lVar3 + -0x60,lVar2 + -0x60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar8 = *(undefined8 *)(lVar3 + -0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar2 + -0x68) = *(undefined8 *)(lVar3 + -0x68);
        uVar10 = *(undefined8 *)(lVar3 + -0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar2 + -0x80) = *(undefined8 *)(lVar3 + -0x80);
        *(undefined8 *)(lVar2 + -0x78) = uVar8;
        *(undefined8 *)(lVar2 + -0x70) = uVar10;
        pcVar6 = *(code **)(lVar3 + -0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (pcVar6 != (code *)0x0) { // [自动静态注释] 条件判断/分支
          *(undefined8 *)(lVar3 + -0x70) = 0;
          *(undefined8 *)(lVar3 + -0x68) = 0;
          *(undefined8 *)(lVar3 + -0x80) = 0;
          *(undefined8 *)(lVar3 + -0x78) = 0;
          (*pcVar6)(lVar3 + -0x60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      lVar11 = lVar11 + -0x110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(lVar2 + -0x110) = 0x8678a8;
      lVar5 = *(long *)(uVar12 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar12 + 0x98) = lVar5;
    } while (lVar4 + lVar11 != lVar7); // [自动静态注释] 循环/迭代
    lVar9 = lVar9 + lVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_2[1] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar9;
  param_2[1] = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[1] = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[2] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar9 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[3] = lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = param_2[1];
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


