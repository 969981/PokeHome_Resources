/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0030B5D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040b5d0; name: FUN_.text__0040b5d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0040b5d0(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_51; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00411c2c(&uStack_51); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = _DAT_008a45b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 - 0x2000 < 0xffffe001) { // [自动静态注释] 条件判断/分支
    uVar7 = 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar7 = 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar2 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar9 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      piVar4 = (int *)(lVar3 + lVar9 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar5 = *(undefined8 **)(piVar4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar5 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        if (puVar5[1] == param_1) { // [自动静态注释] 条件判断/分支
          puVar6 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar8 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          puVar8 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            puVar6 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar8 = (undefined8 *)puVar6[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (puVar8 == (undefined8 *)0x0) goto LAB__text__0040b67c; // [自动静态注释] 条件判断/分支
          } while (puVar8[1] != param_1); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
        piVar1 = piVar4 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar5 != puVar8) { // [自动静态注释] 条件判断/分支
          piVar1 = (int *)(puVar6 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(undefined8 *)piVar1 = puVar8[3];
        if (*(undefined8 **)(piVar4 + 2) == puVar8) { // [自动静态注释] 条件判断/分支
          *(undefined8 **)(piVar4 + 2) = puVar6;
        } // [自动静态注释] 作用域/控制流边界
        *piVar4 = *piVar4 + -1;
        (**(code **)*puVar8)(puVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00400fc0(0x10,puVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar7 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
LAB__text__0040b67c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      param_2 = param_2 & (1 << (ulong)((uint)lVar9 & 0x1f) ^ 0xffffffffU); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (param_2 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00411c70(&uStack_51); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


