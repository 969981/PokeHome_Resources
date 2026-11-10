/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00473BA0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00573ba0; name: FUN_.text__00573ba0
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00573ba0(undefined8 *param_1,long param_2,uint param_3,int param_4,short param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar5 = (long *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,0x80,0x70fbe8,0x79); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar5[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar5[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(plVar5 + 4) = 0;
    plVar5[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar5[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar20 = param_1 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*plVar20 == 0) { // [自动静态注释] 条件判断/分支
      *plVar20 = (long)plVar5;
      *plVar5 = 0;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *plVar5 = *plVar20;
      *plVar20 = (long)plVar5;
    } // [自动静态注释] 作用域/控制流边界
    iVar7 = (param_3 & 0xff) * 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = iVar7 * param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __src = plVar5 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)__src = 0x46464952;
    plVar5[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)plVar5 + 0x74) = 0;
    *(short *)((long)plVar5 + 0x7a) = param_5;
    *(undefined1 *)(plVar5 + 0xf) = 0;
    plVar5[7] = 0x20746d6645564157; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar17 = (undefined2)iVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar19 = (undefined2)(param_3 & 0xff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_5 == 0) { // [自动静态注释] 条件判断/分支
      *(int *)(plVar5 + 9) = param_4;
      *(int *)((long)plVar5 + 0x4c) = iVar4;
      *(undefined2 *)(plVar5 + 10) = uVar17;
      *(undefined4 *)(plVar5 + 8) = 0x28;
      *(undefined2 *)((long)plVar5 + 0x46) = uVar19;
      *(undefined4 *)((long)plVar5 + 0x52) = 0x160010;
      *(undefined2 *)((long)plVar5 + 0x44) = 0xfffe;
      *(undefined2 *)((long)plVar5 + 0x56) = 0;
      *(uint *)(plVar5 + 0xb) = param_3 >> 0xc;
      *(undefined4 *)((long)plVar5 + 0x5c) = 1;
      if ((param_3 & 0xf00) == 0x200) { // [自动静态注释] 条件判断/分支
        uVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar12 = 0xca; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar16 = 0xc1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar14 = 200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar15 = 0x44; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar18 = 0x86; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar19 = 0x11d3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar17 = 0x721; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar17 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar15 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar9 = 0x71; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar11 = 0x9b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar13 = 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar16 = 0xaa; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar18 = 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar19 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 *)((long)plVar5 + 0x6b) = uVar9;
      *(undefined2 *)(plVar5 + 0xc) = uVar17;
      uVar21 = 0x44; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)((long)plVar5 + 0x62) = uVar19;
      *(undefined1 *)((long)plVar5 + 100) = uVar18;
      *(undefined1 *)((long)plVar5 + 0x65) = uVar15;
      *(undefined1 *)((long)plVar5 + 0x66) = uVar14;
      *(undefined1 *)((long)plVar5 + 0x67) = uVar16;
      *(undefined1 *)(plVar5 + 0xd) = uVar12;
      *(undefined1 *)((long)plVar5 + 0x69) = uVar13;
      *(undefined1 *)((long)plVar5 + 0x6a) = uVar11;
      *(undefined4 *)((long)plVar5 + 0x6c) = 0x61746164;
      plVar10 = plVar5 + 0xe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined2 *)(plVar5 + 10) = uVar17;
      *(undefined4 *)((long)plVar5 + 0x52) = 0x10;
      *(undefined4 *)(plVar5 + 8) = 0x18;
      *(uint *)(plVar5 + 0xb) = param_3;
      *(undefined4 *)((long)plVar5 + 0x5c) = 0x61746164;
      plVar10 = plVar5 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar21 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)((long)plVar5 + 0x44) = 0xfffe;
      *(undefined2 *)((long)plVar5 + 0x46) = uVar19;
      *(int *)(plVar5 + 9) = param_4;
      *(int *)((long)plVar5 + 0x4c) = iVar4;
      *(undefined2 *)((long)plVar5 + 0x56) = 0;
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)((long)plVar5 + 0x34) = 0xffffffff;
    *(undefined4 *)plVar10 = 0xffffffff;
    while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) { // [自动静态注释] 循环/迭代
      if (plVar20[1] == param_2) { // [自动静态注释] 条件判断/分支
        uVar8 = *(uint *)(plVar20 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          if (uVar8 == 0) { // [自动静态注释] 条件判断/分支
            uVar6 = FUN__text__00573950(plVar20); // [自动静态注释] 调用尚未恢复正式名称的函数
            if ((uVar6 & 1) == 0) { // [自动静态注释] 条件判断/分支
              return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
            } // [自动静态注释] 作用域/控制流边界
            uVar8 = *(uint *)(plVar20 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          uVar2 = 0x20000 - uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (uVar21 <= 0x20000 - uVar8) { // [自动静态注释] 条件判断/分支
            uVar2 = uVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          memcpy((void *)(*(long *)(plVar20[2] + (ulong)*(uint *)(plVar20 + 3) * 8 + -8) + // [自动静态注释] 内存复制、清零或移动
                         (ulong)uVar8),__src,(ulong)uVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (*(short *)((long)plVar20 + 0x7a) == 0) { // [自动静态注释] 条件判断/分支
            iVar7 = (int)plVar20[0xe] + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(int *)(plVar20 + 0xe) = iVar7;
            iVar7 = iVar7 + 0x3c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            iVar7 = (int)plVar20[0xc] + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(int *)(plVar20 + 0xc) = iVar7;
            iVar7 = iVar7 + 0x2c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *(int *)((long)plVar20 + 0x34) = iVar7;
          __src = (long *)((long)__src + (ulong)uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar1 = (int)plVar20[4] + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (uVar1 != 0x20000) { // [自动静态注释] 条件判断/分支
            uVar8 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          uVar21 = uVar21 - uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(uint *)(plVar20 + 4) = uVar8;
        } while (uVar21 != 0); // [自动静态注释] 循环/迭代
        *(undefined4 *)((long)plVar5 + 0x34) = 0;
        lVar3 = 0x70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(short *)((long)plVar5 + 0x7a) != 0) { // [自动静态注释] 条件判断/分支
          lVar3 = 0x60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(undefined4 *)((long)plVar5 + lVar3) = 0;
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


