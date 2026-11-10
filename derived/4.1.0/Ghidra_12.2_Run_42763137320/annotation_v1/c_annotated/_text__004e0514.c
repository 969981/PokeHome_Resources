/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E0514
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e0514; name: FUN_.text__004e0514
 */


undefined8 * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__004e0514(long param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   ulong param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(undefined8 **)(param_1 + 8) == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar5 = (undefined8 *)FUN__text__004e1030(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 **)(param_1 + 8) = puVar5;
    plVar4 = (long *)(**(code **)*puVar5)(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar4 = (long *)(**(code **)**(undefined8 **)(param_1 + 8))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (plVar4 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    puVar5 = (undefined8 *)FUN__text__00400f80(0,0x68); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar5 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      FUN__text__004e0700(puVar5,plVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      *puVar5 = 0xffffffff46464952;
      puVar5[1] = 0x20746d6645564157; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar2 = param_5 != 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(puVar5 + 2) = 0x28;
      uVar1 = (uint)param_6 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(short *)((long)puVar5 + 0x16) = (short)uVar1;
      uVar8 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (bVar2) { // [自动静态注释] 条件判断/分支
        uVar8 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = uVar1 << (ulong)uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)((long)puVar5 + 0x14) = 0xfffe;
      *(short *)(puVar5 + 4) = (short)iVar3;
      uVar15 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (bVar2) { // [自动静态注释] 条件判断/分支
        uVar15 = 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined2 *)((long)puVar5 + 0x22) = uVar15;
      *(int *)(puVar5 + 3) = param_3;
      *(int *)((long)puVar5 + 0x1c) = iVar3 * param_3;
      *(undefined4 *)((long)puVar5 + 0x24) = 0x16;
      *(uint *)(puVar5 + 5) = (uint)(param_6 >> 0xc) & 0xfffff;
      uVar10 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (!bVar2) { // [自动静态注释] 条件判断/分支
        uVar10 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)((long)puVar5 + 0x2c) = uVar10;
      if ((param_6 & 0xf00) == 0x200) { // [自动静态注释] 条件判断/分支
        uVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar9 = 0xca; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar14 = 0xc1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar12 = 200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar13 = 0x44; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar16 = 0x86; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar17 = 0x11d3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar15 = 0x721; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar15 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = 0x71; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar7 = 0x9b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar11 = 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar14 = 0xaa; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar16 = 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar17 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 *)(puVar5 + 7) = uVar9;
      *(undefined2 *)(puVar5 + 6) = uVar15;
      *(undefined2 *)((long)puVar5 + 0x32) = uVar17;
      *(undefined1 *)((long)puVar5 + 0x34) = uVar16;
      *(undefined1 *)((long)puVar5 + 0x35) = uVar13;
      *(undefined1 *)((long)puVar5 + 0x36) = uVar12;
      *(undefined1 *)((long)puVar5 + 0x37) = uVar14;
      *(undefined1 *)((long)puVar5 + 0x39) = uVar11;
      *(undefined1 *)((long)puVar5 + 0x3a) = uVar7;
      *(undefined1 *)((long)puVar5 + 0x3b) = uVar6;
      *(undefined8 *)((long)puVar5 + 0x3c) = 0x61746164;
      iVar3 = (*(code *)**(undefined8 **)puVar5[0xc])((undefined8 *)puVar5[0xc],param_2,puVar5,0x44) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (iVar3 == 1) { // [自动静态注释] 条件判断/分支
        return puVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__004e0720(puVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00400fc0(0,puVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*plVar4 + 0x20))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


