/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0030FF90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040ff90; name: FUN_.text__0040ff90
 */


undefined4 FUN__text__0040ff90(long param_1,code *param_2,ulong param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_61; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = param_3 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00411c2c(&uStack_61); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar8 = 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_2 != (code *)0x0) && (uVar7 >> 0xd == 0)) { // [自动静态注释] 条件判断/分支
    if ((int)param_3 == 0) { // [自动静态注释] 条件判断/分支
      uVar8 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uVar8 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while (puVar3 = (undefined8 *)FUN__text__00400f80(0x10,0x20), puVar3 != (undefined8 *)0x0) { // [自动静态注释] 循环/迭代
        uVar6 = (uint)uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar3 = 0x887228;
        puVar3[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar4 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar5 = (int *)(param_1 + lVar4 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar3[2] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar3[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar1 = (long *)(piVar5 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long *)(piVar5 + 4) != 0) { // [自动静态注释] 条件判断/分支
          plVar1 = (long *)(*(long *)(piVar5 + 2) + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *plVar1 = (long)puVar3;
        *(undefined8 **)(piVar5 + 2) = puVar3;
        *piVar5 = *piVar5 + 1;
        if ((puVar3 == (undefined8 *)0x0) || // [自动静态注释] 条件判断/分支
           (uVar6 = uVar6 & (1 << (ulong)((uint)lVar4 & 0x1f) ^ 0xffffffffU), uVar7 = (ulong)uVar6, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           uVar6 == 0)) goto LAB__text__00410100; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      uVar8 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar8 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while (puVar3 = (undefined8 *)FUN__text__00400f80(0x10,0x20), puVar3 != (undefined8 *)0x0) { // [自动静态注释] 循环/迭代
        uVar6 = (uint)uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar3 = 0x887228;
        puVar3[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar4 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar5 = (int *)(param_1 + lVar4 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar3[2] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar3[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar1 = (long *)(piVar5 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long *)(piVar5 + 4) != 0) { // [自动静态注释] 条件判断/分支
          plVar1 = (long *)(*(long *)(piVar5 + 2) + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *plVar1 = (long)puVar3;
        *(undefined8 **)(piVar5 + 2) = puVar3;
        *piVar5 = *piVar5 + 1;
        (*param_2)(puVar3,1,param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if ((puVar3 == (undefined8 *)0x0) || // [自动静态注释] 条件判断/分支
           (uVar6 = uVar6 & (1 << (ulong)((uint)lVar4 & 0x1f) ^ 0xffffffffU), uVar7 = (ulong)uVar6, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           uVar6 == 0)) goto LAB__text__00410100; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      uVar8 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00410100: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00411c70(&uStack_61); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar8; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


